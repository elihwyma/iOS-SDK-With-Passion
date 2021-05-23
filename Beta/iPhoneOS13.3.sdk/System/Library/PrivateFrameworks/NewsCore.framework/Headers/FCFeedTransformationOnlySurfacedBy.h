/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

#import <NewsCore/Swift-Protocol.h>

@class NSDictionary, NSSet, NSString;

@interface FCFeedTransformationOnlySurfacedBy : NSObject <Swift>

{
    NSSet *_tagIDs;
    NSDictionary *_feedContextByFeedID;
}

@property (copy, nonatomic) NSSet *tagIDs;
@property (copy, nonatomic) NSDictionary *feedContextByFeedID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (id)transformationWithTagIDs:(id)arg1 feedContextByFeedID:(id)arg2;

- (id)transformFeedItems:(id)arg1;

@end
