/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIStatusBarIdentifier : NSObject <Swift>

{
    id _object;
    NSString *_string;
}

@property (copy, nonatomic, readonly) NSString *stringRepresentation;
@property (copy, nonatomic) id object;
@property (copy, nonatomic) NSString *string;

+ (id)identifierForObject:(id)arg1 string:(id)arg2;
+ (id)displayIdentifierFromStringRepresentation:(id)arg1;

- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
