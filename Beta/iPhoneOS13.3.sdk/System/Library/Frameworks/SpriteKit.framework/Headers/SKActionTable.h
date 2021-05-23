/*
 Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit
 */

#import <Foundation/NSObject.h>

@class NSDictionary, NSMutableDictionary;

@interface SKActionTable : NSObject

{
    NSDictionary *_actionTableDictionary;
    NSMutableDictionary *__info;
}

@property (retain, nonatomic, readonly) NSDictionary *actionTableDictionary;
@property (retain, nonatomic) NSMutableDictionary *_info;

+ (_Bool)supportsSecureCoding;
+ (id)actionTableWithContentsOfDictionary:(id)arg1;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContentsOfDictionary:(id)arg1;
- (id)actionForName:(id)arg1;
- (_Bool)isEqualToActionTable:(id)arg1;

@end
