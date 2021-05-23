/*
 Image: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

#import <Foundation/NSObject.h>

@class NSString;

@interface CDDevice : NSObject

{
    _Bool _isDefaultPaired;
    unsigned int _identifier;
    NSString *_modelIdentifier;
}

@property (readonly) unsigned int identifier;
@property (readonly) NSString *modelIdentifier;
@property _Bool isDefaultPaired;

- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
- (id)initWithSession:(id)arg1 identifier:(unsigned int)arg2 modelIdentifier:(id)arg3 defaultPaired:(_Bool)arg4 error:(id *)arg5;
- (id)initWithSession:(id)arg1 identifier:(unsigned int)arg2 modelIdentifier:(id)arg3 error:(id *)arg4;
- (_Bool)isEqualToDevice:(id)arg1;
- (_Bool)setSystemDataHandlerWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (id)readSystemDataWithError:(id *)arg1;
- (_Bool)requestSystemDataWithError:(id *)arg1;
- (_Bool)setLogDataHandlerWithError:(id *)arg1 handler:(CDUnknownBlockType)arg2;
- (id)readLogDataWithError:(id *)arg1;
- (_Bool)requestLogDataWithError:(id *)arg1;

@end
