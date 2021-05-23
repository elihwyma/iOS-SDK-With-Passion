/*
 Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSString;

@protocol OS_dispatch_queue;

@interface IKAppDataStorage : NSObject

{
    unsigned long long _format;
    NSString *_filePath;
    NSString *_identifier;
    NSMutableDictionary *_storageDict;
    NSObject<OS_dispatch_queue> *_storageQueue;
}

@property (retain, nonatomic) NSMutableDictionary *storageDict;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *storageQueue;
@property (retain, nonatomic, readonly) NSString *filePath;
@property (retain, nonatomic, readonly) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (copy, readonly) NSString *description;
@property (copy, readonly) NSString *debugDescription;

- (unsigned long long)count;
- (void)clear;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (unsigned long long)setData:(id)arg1 forKey:(id)arg2;
- (void)removeDataForKey:(id)arg1;
- (void)_saveDict:(id)arg1;
- (id)getDataForKey:(id)arg1;
- (id)initWithFilePath:(id)arg1 identifier:(id)arg2;

@end
