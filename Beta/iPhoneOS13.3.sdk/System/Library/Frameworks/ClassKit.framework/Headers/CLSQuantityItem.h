/*
 Image: /System/Library/Frameworks/ClassKit.framework/ClassKit
 */

#import <ClassKit/CLSActivityItem.h>

@interface CLSQuantityItem : CLSActivityItem

{
    double _quantity;
}

@property (nonatomic) double quantity;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_init;
- (id)dictionaryRepresentation;
- (id)initWithIdentifier:(id)arg1 title:(id)arg2;

@end
