/*
 Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFPostprocessor : NSObject

+ (id)lightweightStripHTMLTags:(id)arg1;
+ (id)normalizeStrippedHTML:(id)arg1;
+ (struct _NSRange)rangeOfFirstHTMLTag:(id)arg1 searchRange:(struct _NSRange)arg2;
+ (id)lightweightStripHTMLTagsForLine:(id)arg1;
+ (id)postprocessPlainTextWebPage:(id)arg1;
+ (id)adultWebSiteTagging:(id)arg1;

@end
