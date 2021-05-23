/*
 Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <Foundation/NSObject.h>

@class NSError, NSMutableData, NSString;

@interface CoreDAVOctetStreamParser : NSObject

{
    NSMutableData *_octetStreamData;
    NSError *_parserError;
}

@property (retain, nonatomic) NSMutableData *octetStreamData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;
@property (readonly) NSError *parserError;

+ (_Bool)canHandleContentType:(id)arg1;

- (id)init;
- (_Bool)processData:(id)arg1 forTask:(id)arg2;

@end
