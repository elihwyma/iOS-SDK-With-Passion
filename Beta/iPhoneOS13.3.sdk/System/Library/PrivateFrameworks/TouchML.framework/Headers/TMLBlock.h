/*
 Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
 */

#import <NSObject.h>

@interface TMLBlock : NSObject

{
    id _block;
}

@property (nonatomic, readonly) id blockValue;

+ (void)initializeJSContext:(id)arg1;
+ (id)blockWithFunction:(id)arg1 argumentsEncoding:(id)arg2;
+ (id)createBlockForJSFunction:(id)arg1 argumentsEncoding:(id)arg2;
+ (id)blockWithFunction:(id)arg1;
+ (void)callBlock:(id)arg1 arguments:(id)arg2;

- (void)dealloc;
- (id)initWithFunction:(id)arg1 argumentsEncoding:(id)arg2;

@end
