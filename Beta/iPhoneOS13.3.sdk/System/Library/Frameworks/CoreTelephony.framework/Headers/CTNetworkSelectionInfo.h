/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class CTNetwork;

@interface CTNetworkSelectionInfo : NSObject

{
    unsigned long long _selectionState;
    unsigned long long _selectionMode;
    CTNetwork *_selection;
}

@property (nonatomic) unsigned long long selectionState;
@property (nonatomic) unsigned long long selectionMode;
@property (retain, nonatomic) CTNetwork *selection;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
