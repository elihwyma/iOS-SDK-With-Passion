/*
 Image: /System/Library/PrivateFrameworks/WebContentAnalysis.framework/WebContentAnalysis
 */

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface WFNodeWrapper : NSObject

{
    struct _xmlNode *_node;
}

- (void)dealloc;
- (struct _xmlNode *)node;
- (id)initWithNode:(struct _xmlNode *)arg1;

@end
