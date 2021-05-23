/*
 Image: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
 */

#import <Foundation/NSArray.h>

@class NSString;

@interface NSArray (DisplayCache)

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (id)atx_subarrayWithLimit:(unsigned long long)arg1;
- (void)atx_writeToFile:(struct __sFILE *)arg1;
- (id)atx_filterPlayMediaIntentsWithUnavailableAppDestinationGivenSBAppList:(id)arg1;
- (id)atx_actionsFromActionResults;

@end
