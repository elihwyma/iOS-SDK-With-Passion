/*
 Image: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
 */

#import <Foundation/NSObject.h>

@class CLSPerson, NSArray, NSDate, NSString;

@interface PGPotentialRecentPersonCentricSuggestion : NSObject

{
    CLSPerson *_person;
    NSString *_personLocalIdentifier;
    NSArray *_assets;
    NSDate *_notSeenSinceDate;
}

@property (nonatomic, readonly) CLSPerson *person;
@property (nonatomic, readonly) NSString *personLocalIdentifier;
@property (nonatomic, readonly) NSArray *assets;
@property (nonatomic, readonly) NSDate *notSeenSinceDate;
@property (nonatomic, readonly) unsigned long long relationshipScore;

- (id)initWithCLSPerson:(id)arg1 assets:(id)arg2;
- (id)initWithPersonLocalIdentifier:(id)arg1 assets:(id)arg2 notSeenSinceDate:(id)arg3;

@end
