/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIDebugReportComponents : NSObject

{
    NSString *_header;
    NSString *_body;
    NSString *_footer;
}

@property (copy, nonatomic) NSString *header;
@property (copy, nonatomic) NSString *body;
@property (copy, nonatomic) NSString *footer;

- (id)init;

@end
