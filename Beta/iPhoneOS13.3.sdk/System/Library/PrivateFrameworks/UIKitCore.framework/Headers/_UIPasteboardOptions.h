/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

@class NSDate;

@interface _UIPasteboardOptions : NSObject

{
    _Bool _pinned;
    _Bool _localOnly;
    NSDate *_expirationDate;
}

@property (nonatomic, getter=isPinned) _Bool pinned;
@property (nonatomic, getter=isLocalOnly) _Bool localOnly;
@property (retain, nonatomic) NSDate *expirationDate;

+ (id)optionsWithDictionary:(id)arg1;

- (id)initWithOptionsDictionary:(id)arg1;

@end
