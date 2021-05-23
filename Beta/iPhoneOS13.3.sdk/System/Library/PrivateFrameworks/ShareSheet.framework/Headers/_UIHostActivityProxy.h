/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSUUID;

@interface _UIHostActivityProxy : NSObject

{
    _Bool _disabled;
    _Bool _favorite;
    _Bool _restricted;
    NSUUID *_proxyIdentifier;
    NSNumber *_imageSlot;
    NSNumber *_labelSlot;
    double _platterTextHeight;
}

@property (retain, nonatomic) NSUUID *proxyIdentifier;
@property (retain, nonatomic) NSNumber *imageSlot;
@property (retain, nonatomic) NSNumber *labelSlot;
@property (nonatomic) double platterTextHeight;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (nonatomic, getter=isFavorite) _Bool favorite;
@property (nonatomic, getter=isRestricted) _Bool restricted;

+ (_Bool)supportsSecureCoding;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
