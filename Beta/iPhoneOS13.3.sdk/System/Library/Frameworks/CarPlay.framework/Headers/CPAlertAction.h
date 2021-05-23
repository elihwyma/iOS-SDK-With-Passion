/*
 Image: /System/Library/Frameworks/CarPlay.framework/CarPlay
 */

#import <Foundation/NSObject.h>

@class NSString, NSUUID;

@interface CPAlertAction : NSObject

{
    NSString *_title;
    unsigned long long _style;
    CDUnknownBlockType _handler;
    NSUUID *_identifier;
}

@property (retain, nonatomic) NSUUID *identifier;
@property (copy, nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) unsigned long long style;
@property (copy, nonatomic, readonly) CDUnknownBlockType handler;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 style:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;

@end
