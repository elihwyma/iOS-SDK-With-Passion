/*
 Image: /System/Library/PrivateFrameworks/AudioServerDriver.framework/AudioServerDriver
 */

@interface ASDControl

{
    unsigned int _objectClassID;
    unsigned int _controlElement;
    unsigned int _controlScope;
}

@property (nonatomic) unsigned int controlElement;
@property (nonatomic) unsigned int controlScope;

- (unsigned int)objectClass;
- (_Bool)hasProperty:(const struct AudioObjectPropertyAddress *)arg1;
- (id)initWithPlugin:(id)arg1;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3;
- (id)initWithElement:(unsigned int)arg1 inScope:(unsigned int)arg2 withPlugin:(id)arg3 andObjectClassID:(unsigned int)arg4;
- (unsigned int)dataSizeForProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 andQualifierData:(const void *)arg3;
- (_Bool)getProperty:(const struct AudioObjectPropertyAddress *)arg1 withQualifierSize:(unsigned int)arg2 qualifierData:(const void *)arg3 dataSize:(unsigned int *)arg4 andData:(void *)arg5 forClient:(int)arg6;
- (_Bool)isKindOfAudioClass:(unsigned int)arg1;
- (id)diagnosticDescriptionWithIndent:(id)arg1 walkTree:(_Bool)arg2;
- (unsigned int)baseClass;
- (id)driverClassName;

@end
