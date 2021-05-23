/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class IKAppContext, NSMutableDictionary;

@interface IKJSArrayBufferStore : NSObject

{
    NSMutableDictionary *_bufferStorage;
    IKAppContext *_appContext;
}

@property (nonatomic, readonly) NSMutableDictionary *bufferStorage;
@property (weak, nonatomic, readonly) IKAppContext *appContext;

- (id)initWithAppContext:(id)arg1;
- (id)arrayBufferForData:(id)arg1;

@end
