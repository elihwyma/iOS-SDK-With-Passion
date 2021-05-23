/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface UIWebPDFLinkAction : NSObject

{
    int type;
    NSString *title;
    CDUnknownBlockType handler;
}

@property (copy, nonatomic) NSString *title;
@property (nonatomic) int type;
@property (copy, nonatomic) CDUnknownBlockType handler;

- (void)dealloc;

@end
