/*
 Image: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
 */

#import <WiFiKit/WFOperation.h>

@class NSString;

@interface WFSaveLogsOperation : WFOperation

{
    NSString *_comments;
}

@property (copy, nonatomic) NSString *comments;

- (void)start;
- (id)initWithComments:(id)arg1;

@end
