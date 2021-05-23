/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class PKPrinter;

__attribute__((visibility("hidden")))
@interface UIPrintInfoRequest : NSObject

{
    PKPrinter *_printer;
    int _requestState;
    CDUnknownBlockType _completionHandler;
}

@property (nonatomic) int requestState;
@property (copy, nonatomic) CDUnknownBlockType completionHandler;

+ (id)requestInfoForPrinter:(id)arg1;

- (void)requestPrintInfo;

@end
