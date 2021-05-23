/*
 Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

#import <Foundation/NSDateFormatter.h>

@class NSString;

@interface CKAutoupdatingDateFormatter : NSDateFormatter

{
    NSString *_template;
}

@property (copy, nonatomic) NSString *template;

- (void)dealloc;
- (id)notificationCenter;
- (id)initWithTemplate:(id)arg1;
- (void)updateDateFormat;

@end
