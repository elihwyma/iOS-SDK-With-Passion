/*
 Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

#import <Foundation/NSObject.h>

@class NSArray, NSAttributedString;

@interface MKMultiPartAttributedString : NSObject

{
    NSAttributedString *_attributedString;
    NSArray *_components;
    NSArray *_separators;
}

@property (copy, nonatomic, readonly) NSArray *components;
@property (copy, nonatomic, readonly) NSArray *separators;
@property (nonatomic, readonly) NSAttributedString *attributedString;

+ (id)multiPartAttributedStringWithComponents:(id)arg1 repeatedSeparator:(id)arg2;
+ (id)multiPartAttributedStringWithString:(id)arg1;
+ (id)_mapkit_multiPartAttributedStringForServerFormattedString:(id)arg1 defaultAttributes:(id)arg2;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)debugDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithComponents:(id)arg1 separators:(id)arg2;

@end
