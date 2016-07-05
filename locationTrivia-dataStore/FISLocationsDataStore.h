//
//  FISLocationsDataStore.h
//  
//
//  Created by Erica on 7/1/16.
//
//

#import <Foundation/Foundation.h>
#import "FISTrivium.h"
#import "FISLocation.h"

@interface FISLocationsDataStore : NSObject
@property (strong, nonatomic) NSMutableArray *locations;

+ (instancetype)sharedLocationsDataStore;
- (instancetype)init;


@end
