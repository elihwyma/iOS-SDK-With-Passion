/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

#import <CallKit/Swift-Protocol.h>

@class NSArray, NSMutableOrderedSet, NSString, NSUUID;

@interface CXTransaction : NSObject <Swift>

{
    NSUUID *_UUID;
    NSMutableOrderedSet *_mutableActions;
}

@property (copy, nonatomic) NSUUID *UUID;
@property (retain, nonatomic) NSMutableOrderedSet *mutableActions;
@property (nonatomic, readonly, getter=isComplete) _Bool complete;
@property (copy, nonatomic, readonly) NSArray *actions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

+ (_Bool)supportsSecureCoding;

- (id)init;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)addAction:(id)arg1;
- (id)initWithAction:(id)arg1;
- (id)initWithActions:(id)arg1;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (id)sanitizedCopyWithZone:(struct _NSZone *)arg1;
- (id)sanitizedCopy;
- (id)allowedClassesForMutableActions;
- (void)addActionsFromTransaction:(id)arg1;

@end
