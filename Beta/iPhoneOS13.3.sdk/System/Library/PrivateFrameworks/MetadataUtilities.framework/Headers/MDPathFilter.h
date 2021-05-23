/*
 Image: /System/Library/PrivateFrameworks/MetadataUtilities.framework/MetadataUtilities
 */

#import <Foundation/NSObject.h>

@interface MDPathFilter : NSObject

{
    struct _MDPlistContainer *_plist;
    struct {
        unsigned short _field1;
        unsigned short _field2;
        unsigned short _field3;
        unsigned long long _field4;
        unsigned long long _field5;
        unsigned long long _field6;
        unsigned long long _field7;
        unsigned long long _field8;
        unsigned short _field9;
        unsigned long long _field10[0];
    } *_commonValues;
    CDStruct_b7fac349 _rootArray;
    CDStruct_b7fac349 _prefixesDictionary;
    CDStruct_b7fac349 _extensionsDictionary;
    CDStruct_b7fac349 _hiddenExtensionsDictionary;
    struct {
        unsigned short _field1;
        unsigned int _field2;
        unsigned int _field3;
        unsigned int _field4;
        unsigned short _field5;
        unsigned short _field6;
        unsigned short _field7;
        unsigned long long _field8;
        unsigned long long _field9;
        unsigned long long _field10;
        unsigned long long _field11;
    } *_rootElement;
    unsigned short _mountDepth;
    unsigned long long _defaultRule;
    unsigned long long _inheritMask;
    _Bool _processExtensions;
    int _auxValueCount;
    unsigned long long *_auxValues;
    int _leadingDotType;
    int _leadingDotIndex;
    int _icloudDotType;
    int _icloudDotIndex;
    _Bool _isDataROSP;
}

- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)data;
- (CDStruct_b7969f8e)filterFullPath:(const char *)arg1;
- (struct _MDPlistContainer *)plist;
- (id)initWithMDPlist:(struct _MDPlistContainer *)arg1;
- (CDStruct_b7969f8e)filter:(const char *)arg1 allowBundleCheck:(_Bool)arg2;
- (CDStruct_b7969f8e)iCloudPath:(const char *)arg1 updateFilter:(CDStruct_b7969f8e)arg2;
- (_Bool)isDataROSP;
- (CDStruct_b7969f8e)filterPartialPath:(const char *)arg1;
- (CDStruct_b7969f8e)filterFullPathTestBundle:(const char *)arg1;
- (unsigned long long)trimBundlePath:(CDStruct_b7969f8e)arg1 path:(const char *)arg2 buffer:(char *)arg3 length:(unsigned long long)arg4;
- (unsigned long long *)filterSubAuxValues:(CDStruct_b7969f8e)arg1 count:(int *)arg2;

@end
