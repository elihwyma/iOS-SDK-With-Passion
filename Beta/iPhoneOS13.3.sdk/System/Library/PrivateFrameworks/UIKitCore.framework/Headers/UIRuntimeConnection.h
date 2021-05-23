/*
 Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

#import <Foundation/NSObject.h>

#import <UIKitCore/Swift-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIRuntimeConnection : NSObject <Swift>

{
    id _source;
    id _destination;
    NSString *_label;
}

@property (retain, nonatomic) id source;
@property (retain, nonatomic) id destination;
@property (copy, nonatomic) NSString *label;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)connect;
- (void)connectForSimulator;

@end
