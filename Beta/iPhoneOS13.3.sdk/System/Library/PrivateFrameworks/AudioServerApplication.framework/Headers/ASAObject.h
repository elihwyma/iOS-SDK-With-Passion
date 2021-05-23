/*
 Image: /System/Library/PrivateFrameworks/AudioServerApplication.framework/AudioServerApplication
 */

#import <Foundation/NSObject.h>

@class NSArray;

@interface ASAObject : NSObject

{
    unsigned int _objectID;
}

@property (nonatomic, readonly) unsigned int objectID;
@property (nonatomic, readonly) unsigned int baseClass;
@property (nonatomic, readonly) unsigned int objectClass;
@property (nonatomic, readonly) unsigned int ownerID;
@property (copy, nonatomic, readonly) NSArray *ownedObjectIDs;

- (id)init;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(_Bool)arg2;
- (_Bool)getMasterGlobalProperty:(unsigned int)arg1 withData:(void *)arg2 ofSize:(unsigned int *)arg3 withQualifier:(void *)arg4 ofSize:(unsigned int)arg5;
- (_Bool)setMasterOutputProperty:(unsigned int)arg1 withData:(void *)arg2 ofSize:(unsigned int)arg3 withQualifier:(void *)arg4 ofSize:(unsigned int)arg5;
- (_Bool)setMasterInputProperty:(unsigned int)arg1 withData:(void *)arg2 ofSize:(unsigned int)arg3 withQualifier:(void *)arg4 ofSize:(unsigned int)arg5;
- (id)initWithAudioObjectID:(unsigned int)arg1;
- (_Bool)setMasterGlobalProperty:(unsigned int)arg1 withData:(void *)arg2 ofSize:(unsigned int)arg3 withQualifier:(void *)arg4 ofSize:(unsigned int)arg5;
- (id)coreAudioClassName;
- (_Bool)getMasterInputProperty:(unsigned int)arg1 withData:(void *)arg2 ofSize:(unsigned int *)arg3 withQualifier:(void *)arg4 ofSize:(unsigned int)arg5;
- (_Bool)getMasterOutputProperty:(unsigned int)arg1 withData:(void *)arg2 ofSize:(unsigned int *)arg3 withQualifier:(void *)arg4 ofSize:(unsigned int)arg5;
- (unsigned int)sizeOfMasterGlobalProperty:(unsigned int)arg1 withQualifier:(void *)arg2 ofSize:(unsigned int)arg3;
- (unsigned int)sizeOfMasterInputProperty:(unsigned int)arg1 withQualifier:(void *)arg2 ofSize:(unsigned int)arg3;
- (unsigned int)sizeOfMasterOutputProperty:(unsigned int)arg1 withQualifier:(void *)arg2 ofSize:(unsigned int)arg3;
- (_Bool)hasMasterGlobalProperty:(unsigned int)arg1;
- (_Bool)hasProperty:(unsigned int)arg1 scope:(unsigned int)arg2 ofElement:(unsigned int)arg3;
- (unsigned int)sizeOfProperty:(unsigned int)arg1 scope:(unsigned int)arg2 ofElement:(unsigned int)arg3 withQualifier:(void *)arg4 ofSize:(unsigned int)arg5;
- (_Bool)getProperty:(unsigned int)arg1 scope:(unsigned int)arg2 ofElement:(unsigned int)arg3 withData:(void *)arg4 ofSize:(unsigned int *)arg5 withQualifier:(void *)arg6 ofSize:(unsigned int)arg7;
- (_Bool)setProperty:(unsigned int)arg1 scope:(unsigned int)arg2 ofElement:(unsigned int)arg3 withData:(void *)arg4 ofSize:(unsigned int)arg5 withQualifier:(void *)arg6 ofSize:(unsigned int)arg7;
- (_Bool)isPropertySettable:(unsigned int)arg1 scope:(unsigned int)arg2 ofElement:(unsigned int)arg3;
- (_Bool)onQueue:(id)arg1 forProperty:(unsigned int)arg2 scope:(unsigned int)arg3 ofElement:(unsigned int)arg4 addListener:(CDUnknownBlockType)arg5;
- (_Bool)onQueue:(id)arg1 forProperty:(unsigned int)arg2 scope:(unsigned int)arg3 ofElement:(unsigned int)arg4 removeListener:(CDUnknownBlockType)arg5;
- (_Bool)hasInputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2;
- (_Bool)hasMasterInputProperty:(unsigned int)arg1;
- (_Bool)hasOutputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2;
- (_Bool)hasMasterOutputProperty:(unsigned int)arg1;
- (_Bool)hasGlobalProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2;
- (unsigned int)sizeOfInputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withQualifier:(void *)arg3 ofSize:(unsigned int)arg4;
- (unsigned int)sizeOfOutputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withQualifier:(void *)arg3 ofSize:(unsigned int)arg4;
- (unsigned int)sizeOfGlobalProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withQualifier:(void *)arg3 ofSize:(unsigned int)arg4;
- (_Bool)getInputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(void *)arg3 ofSize:(unsigned int *)arg4 withQualifier:(void *)arg5 ofSize:(unsigned int)arg6;
- (_Bool)getOutputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(void *)arg3 ofSize:(unsigned int *)arg4 withQualifier:(void *)arg5 ofSize:(unsigned int)arg6;
- (_Bool)getGlobalProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(void *)arg3 ofSize:(unsigned int *)arg4 withQualifier:(void *)arg5 ofSize:(unsigned int)arg6;
- (_Bool)setInputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(void *)arg3 ofSize:(unsigned int)arg4 withQualifier:(void *)arg5 ofSize:(unsigned int)arg6;
- (_Bool)setOutputProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(void *)arg3 ofSize:(unsigned int)arg4 withQualifier:(void *)arg5 ofSize:(unsigned int)arg6;
- (_Bool)setGlobalProperty:(unsigned int)arg1 ofElement:(unsigned int)arg2 withData:(void *)arg3 ofSize:(unsigned int)arg4 withQualifier:(void *)arg5 ofSize:(unsigned int)arg6;
- (_Bool)isInputPropertySettable:(unsigned int)arg1 ofElement:(unsigned int)arg2;
- (_Bool)isMasterInputPropertySettable:(unsigned int)arg1;
- (_Bool)isOutputPropertySettable:(unsigned int)arg1 ofElement:(unsigned int)arg2;
- (_Bool)isMasterOutputPropertySettable:(unsigned int)arg1;
- (_Bool)isGlobalPropertySettable:(unsigned int)arg1 ofElement:(unsigned int)arg2;
- (_Bool)isMasterGlobalPropertySettable:(unsigned int)arg1;
- (_Bool)onQueue:(id)arg1 forInputProperty:(unsigned int)arg2 ofElement:(unsigned int)arg3 addListener:(CDUnknownBlockType)arg4;
- (_Bool)onQueue:(id)arg1 forMasterInputProperty:(unsigned int)arg2 addListener:(CDUnknownBlockType)arg3;
- (_Bool)onQueue:(id)arg1 forOutputProperty:(unsigned int)arg2 ofElement:(unsigned int)arg3 addListener:(CDUnknownBlockType)arg4;
- (_Bool)onQueue:(id)arg1 forMasterOutputProperty:(unsigned int)arg2 addListener:(CDUnknownBlockType)arg3;
- (_Bool)onQueue:(id)arg1 forGlobalProperty:(unsigned int)arg2 ofElement:(unsigned int)arg3 addListener:(CDUnknownBlockType)arg4;
- (_Bool)onQueue:(id)arg1 forMasterGlobalProperty:(unsigned int)arg2 addListener:(CDUnknownBlockType)arg3;
- (_Bool)onQueue:(id)arg1 forInputProperty:(unsigned int)arg2 ofElement:(unsigned int)arg3 removeListener:(CDUnknownBlockType)arg4;
- (_Bool)onQueue:(id)arg1 forMasterInputProperty:(unsigned int)arg2 removeListener:(CDUnknownBlockType)arg3;
- (_Bool)onQueue:(id)arg1 forOutputProperty:(unsigned int)arg2 ofElement:(unsigned int)arg3 removeListener:(CDUnknownBlockType)arg4;
- (_Bool)onQueue:(id)arg1 forMasterOutputProperty:(unsigned int)arg2 removeListener:(CDUnknownBlockType)arg3;
- (_Bool)onQueue:(id)arg1 forGlobalProperty:(unsigned int)arg2 ofElement:(unsigned int)arg3 removeListener:(CDUnknownBlockType)arg4;
- (_Bool)onQueue:(id)arg1 forMasterGlobalProperty:(unsigned int)arg2 removeListener:(CDUnknownBlockType)arg3;

@end
