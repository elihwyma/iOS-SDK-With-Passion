/*
 Image: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
 */

#import <Foundation/NSObject.h>

@class NSNumber, NSUUID;

@interface UIAirDropNode : NSObject

{
    _Bool _wantsTwoLines;
    _Bool _hasSquareImage;
    _Bool _magicHead;
    _Bool _disabled;
    _Bool _restricted;
    NSNumber *_imageSlot;
    NSNumber *_mainLabelSlot;
    NSNumber *_topLabelSlot;
    NSNumber *_bottomLabelSlot;
    NSNumber *_transportSlot;
    NSUUID *_nodeIdentifier;
    long long _selectionReason;
}

@property (retain) NSNumber *imageSlot;
@property (retain) NSNumber *transportSlot;
@property (retain) NSNumber *mainLabelSlot;
@property (retain) NSNumber *topLabelSlot;
@property (retain) NSNumber *bottomLabelSlot;
@property (retain) NSUUID *nodeIdentifier;
@property (nonatomic) _Bool wantsTwoLines;
@property (nonatomic) _Bool hasSquareImage;
@property (nonatomic) _Bool magicHead;
@property (nonatomic) long long selectionReason;
@property (nonatomic, getter=isDisabled) _Bool disabled;
@property (nonatomic, getter=isRestricted) _Bool restricted;

+ (_Bool)supportsSecureCoding;
+ (id)nodeWithImageSlot:(id)arg1 labelSlot:(id)arg2 transportSlot:(id)arg3;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
