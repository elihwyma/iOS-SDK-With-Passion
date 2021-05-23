/*
 Image: /System/Library/PrivateFrameworks/Home.framework/Home
 */

#import <Foundation/NSObject.h>

#import <Home/Swift-Protocol.h>

@class NSNumber, NSString;

@interface HFTVInputControlItemValue : NSObject <Swift>

{
    _Bool _isHidden;
    _Bool _isSelected;
    NSNumber *_identifier;
    NSString *_name;
}

@property (copy, nonatomic, readonly) NSNumber *identifier;
@property (copy, nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) _Bool isHidden;
@property (nonatomic, readonly) _Bool isConfigured;
@property (nonatomic, readonly) _Bool isSelected;

+ (id)valueWithInputName:(id)arg1 identifier:(id)arg2 isHidden:(_Bool)arg3 isSelected:(_Bool)arg4;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithInputName:(id)arg1 identifier:(id)arg2 isHidden:(_Bool)arg3 isSelected:(_Bool)arg4;

@end
