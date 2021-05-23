/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <Foundation/NSObject.h>

@class NSError, NSString;

@interface CoreDAVNullParser : NSObject

{
    NSError *_parserError;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSError *parserError;

+ (_Bool)canHandleContentType:(id)arg1;

- (_Bool)processData:(id)arg1 forTask:(id)arg2;

@end
