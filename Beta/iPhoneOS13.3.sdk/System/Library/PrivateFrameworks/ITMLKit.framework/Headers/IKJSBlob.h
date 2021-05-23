/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@class NSData;

@interface IKJSBlob : IKJSObject

{
    NSData *_data;
}

@property (nonatomic, readonly) NSData *data;

- (id)initWithData:(id)arg1;

@end
