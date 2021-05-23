/*
 Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface AXAssertionWorkItem : NSObject

{
    _Bool _acquire;
    NSString *_type;
    NSString *_identifier;
    unsigned long long _retries;
}

@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) _Bool acquire;
@property (nonatomic) unsigned long long retries;

- (id)initWithType:(id)arg1 identifier:(id)arg2 isAcquisition:(_Bool)arg3;

@end
