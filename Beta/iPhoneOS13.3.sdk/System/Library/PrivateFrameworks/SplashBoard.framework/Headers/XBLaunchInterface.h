/*
 Image: /System/Library/PrivateFrameworks/SplashBoard.framework/SplashBoard
 */

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface XBLaunchInterface : NSObject

{
    _Bool _default;
    unsigned long long _type;
    NSString *_name;
    NSString *_identifier;
    NSArray *_urlSchemes;
}

@property (nonatomic) unsigned long long type;
@property (nonatomic, getter=_isDefault) _Bool _default;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSArray *urlSchemes;
@property (nonatomic, readonly) _Bool isXIB;
@property (nonatomic, readonly) _Bool isStoryboard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 name:(id)arg2 identifier:(id)arg3 urlSchemes:(id)arg4 isDefault:(_Bool)arg5;

@end
