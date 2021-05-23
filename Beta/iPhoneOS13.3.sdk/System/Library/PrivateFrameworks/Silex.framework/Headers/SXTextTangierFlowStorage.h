/*
 Image: /System/Library/PrivateFrameworks/Silex.framework/Silex
 */

#import <TSReading/TSWPStorage.h>

@class NSString;

@interface SXTextTangierFlowStorage : TSWPStorage

{
    NSString *_flowName;
}

@property (nonatomic, readonly) NSString *flowName;

- (id)initWithContext:(id)arg1 string:(id)arg2 stylesheet:(id)arg3 kind:(int)arg4 flowName:(id)arg5;

@end
