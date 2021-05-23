/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSUUID;

@interface _UIUserDefaultsActivityProxy : NSObject

{
    _Bool _canEdit;
    _Bool _canMove;
    _Bool _canHide;
    _Bool _isHidden;
    NSUUID *_activityUUID;
    NSNumber *_imageSlot;
    NSNumber *_labelSlot;
    double _platterTextHeight;
}

@property (retain, nonatomic) NSUUID *activityUUID;
@property (retain, nonatomic) NSNumber *imageSlot;
@property (retain, nonatomic) NSNumber *labelSlot;
@property (nonatomic) _Bool canEdit;
@property (nonatomic) _Bool canMove;
@property (nonatomic) _Bool canHide;
@property (nonatomic) _Bool isHidden;
@property (nonatomic) double platterTextHeight;

+ (_Bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
