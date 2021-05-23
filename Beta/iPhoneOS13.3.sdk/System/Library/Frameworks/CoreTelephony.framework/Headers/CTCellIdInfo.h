/*
 Image: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

#import <Foundation/NSObject.h>

@class NSNumber;

@interface CTCellIdInfo : NSObject

{
    NSNumber *_cellId;
    NSNumber *_baseId;
}

@property (nonatomic, readonly) NSNumber *cellId;
@property (nonatomic, readonly) NSNumber *baseId;

+ (_Bool)supportsSecureCoding;
+ (id)cellIdInfoFromCellId:(int)arg1 baseId:(int)arg2;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
