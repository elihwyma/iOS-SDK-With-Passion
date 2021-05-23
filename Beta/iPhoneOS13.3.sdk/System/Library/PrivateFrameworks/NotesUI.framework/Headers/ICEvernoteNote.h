/*
 Image: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
 */

#import <Foundation/NSObject.h>

@class NSArray, NSDate, NSString;

@interface ICEvernoteNote : NSObject

{
    NSString *_title;
    NSString *_content;
    NSDate *_created;
    NSDate *_updated;
    NSArray *_resources;
}

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSDate *created;
@property (retain, nonatomic) NSDate *updated;
@property (retain, nonatomic) NSArray *resources;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
