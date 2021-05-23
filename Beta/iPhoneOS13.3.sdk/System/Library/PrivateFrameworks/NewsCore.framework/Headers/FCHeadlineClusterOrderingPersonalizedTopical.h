/*
 Image: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface FCHeadlineClusterOrderingPersonalizedTopical : NSObject

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)orderTopicsWithClusteredHeadlines:(id)arg1 additionalHeadlines:(id)arg2 subscribedTagIDs:(id)arg3 scoresByArticleID:(id)arg4 personalizer:(id)arg5 tagNameProvider:(CDUnknownBlockType)arg6 personalizationTreatment:(id)arg7 translationProvider:(id)arg8;

@end
