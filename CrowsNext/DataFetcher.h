//
//  DataFetcher.h
//  CrowsNext
//
//  Created by Julie Soliman on 6/19/15.
//  Copyright (c) 2015 Solstice Mobile. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "Project.h"
#import "Endpoint.h"
//#import "Account.h"

@interface DataFetcher : NSObject
+ (void)fetchProjectsWithSuccess:(void (^)(NSArray *projects))success andError:(void (^)(NSError *error))error;
+ (void)fetchEndpointsForProject:(Project *)project withSuccess:(void (^)(NSArray *environments))success andError:(void (^)(NSError *error))error;
//- (void)fetchAccountsForEnvironment:(Environment *)environment withSuccess:(void (^)(NSArray *accounts))success andError:(void (^)(NSError *error))error;
@end
