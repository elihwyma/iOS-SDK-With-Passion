/*
 Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface ENNoteContent : NSObject

{
    NSString *_emml;
}

@property (copy, nonatomic) NSString *emml;

+ (id)noteContentWithString:(id)arg1;
+ (id)noteContentWithContentArray:(id)arg1;
+ (id)noteContentWithSanitizedHTML:(id)arg1;
+ (id)noteContentWithENML:(id)arg1;

- (id)enmlWithNote:(id)arg1;
- (id)initWithENML:(id)arg1;
- (id)enml;

@end
