/*
 Image: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

@interface FASharedService : NSObject

{
    _Bool _isSeparator;
    _Bool _isDefault;
    NSString *_name;
    NSNumber *_order;
    NSString *_displayLabel;
    NSString *_subLabel;
    NSString *_detailLabel;
    NSString *_iconURLString;
    NSString *_iconURLStringx2;
    NSString *_iconURLStringx3;
    NSString *_actionURLString;
}

@property (nonatomic, readonly) _Bool isSeparator;
@property (nonatomic, readonly) _Bool isDefault;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSNumber *order;
@property (nonatomic, readonly) NSString *displayLabel;
@property (nonatomic, readonly) NSString *subLabel;
@property (nonatomic, readonly) NSString *detailLabel;
@property (nonatomic, readonly) NSString *iconURLString;
@property (nonatomic, readonly) NSString *iconURLStringx2;
@property (nonatomic, readonly) NSString *iconURLStringx3;
@property (nonatomic, readonly) NSString *actionURLString;

- (_Bool)isEqual:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (_Bool)isEqualToSharedService:(id)arg1;

@end
