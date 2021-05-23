/*
 Image: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSString;

@interface EKUITextAndHeaderItem : NSObject

{
    NSString *_text;
    NSString *_header;
    long long _lines;
}

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *header;
@property (nonatomic) long long lines;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;

+ (id)itemWithText:(id)arg1 andHeader:(id)arg2;

- (id)description;
- (id)initWithDictionary:(id)arg1;

@end
