/*
 Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

#import <WebContentAnalysis/WFTagFlyweight.h>

__attribute__((visibility("hidden")))
@interface WFDocumentStructureTag : WFTagFlyweight

+ (id)tagForNumberOfPixels:(long long)arg1;
+ (id)tagForNumberOfImages:(long long)arg1;

- (id)tagWithWebpage:(id)arg1;

@end
