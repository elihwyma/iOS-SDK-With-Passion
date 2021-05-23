/*
 Image: /System/Library/Frameworks/WatchKit.framework/WatchKit
 */

#import <Foundation/NSObject.h>

@class NSString, UIFont;

@interface SPFont : NSObject

{
    UIFont *_font;
}

@property (retain, nonatomic) UIFont *font;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)unarchiver:(id)arg1 didDecodeObject:(id)arg2;
- (id)initWithFont:(id)arg1;

@end
