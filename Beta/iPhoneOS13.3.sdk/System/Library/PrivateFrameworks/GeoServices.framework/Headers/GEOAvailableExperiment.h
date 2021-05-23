/*
 Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

#import <NSObject.h>

@class NSArray, NSMutableArray, NSString;

@interface GEOAvailableExperiment : NSObject

{
    NSString *_identifier;
    NSString *_name;
    NSMutableArray *_branches;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSArray *branches;

- (id)description;
- (id)initWithIdentifier:(id)arg1 name:(id)arg2;
- (void)_addBranch:(id)arg1;
- (id)_branchForLabel:(id)arg1;

@end
