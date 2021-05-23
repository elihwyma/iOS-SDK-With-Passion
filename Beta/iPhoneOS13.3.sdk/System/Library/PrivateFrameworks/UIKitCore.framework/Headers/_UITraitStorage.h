/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface _UITraitStorage : NSObject <Swift>

{
    NSMutableArray *_records;
    NSString *_keyPath;
    id _object;
}

@property (nonatomic, readonly) NSString *keyPath;
@property (weak, nonatomic, readonly) id object;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)applyRecordsMatchingTraitCollection:(id)arg1;
- (id)_propertyDescriptionString;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2;
- (id)records;
- (void)addRecord:(id)arg1;

@end
