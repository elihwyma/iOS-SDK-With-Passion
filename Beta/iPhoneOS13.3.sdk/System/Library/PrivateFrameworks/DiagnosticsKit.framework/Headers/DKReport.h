/*
 Image: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/DiagnosticsKit
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface DKReport : NSObject

{
    struct NSArray *_components;
}

@property (nonatomic, readonly) NSArray *components;

+ (_Bool)supportsSecureCoding;
+ (id)reportWithComponents:(struct NSArray *)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEmpty;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponents:(struct NSArray *)arg1;
- (id)arrayForJSON;
- (id)reportByMergingReport:(id)arg1;

@end
