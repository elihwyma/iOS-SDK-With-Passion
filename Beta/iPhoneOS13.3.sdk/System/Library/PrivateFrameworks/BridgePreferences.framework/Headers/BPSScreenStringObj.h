/*
 Image: /System/Library/PrivateFrameworks/BridgePreferences.framework/BridgePreferences
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface BPSScreenStringObj : NSObject

{
    NSString *_compact;
    NSString *_regular;
    NSString *_size394h;
    NSString *_size448h;
}

@property (copy, nonatomic) NSString *compact;
@property (copy, nonatomic) NSString *regular;
@property (copy, nonatomic) NSString *size394h;
@property (copy, nonatomic) NSString *size448h;

+ (id)screenStringsWithArray:(id)arg1;

- (id)initWithArray:(id)arg1;

@end
