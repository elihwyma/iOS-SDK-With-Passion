/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <ITMLKit/IKJSObject.h>

@class NSString;

@interface IKDOMLSInput : IKJSObject

{
    _Bool _certifiedText;
    id _byteStream;
    NSString *_stringData;
    NSString *_encoding;
}

@property (retain, nonatomic) id byteStream;
@property (retain, nonatomic) NSString *stringData;
@property (retain, nonatomic) NSString *encoding;
@property (nonatomic) _Bool certifiedText;

@end
