/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@interface CXCallDirectoryStoreMigrationResult : NSObject

{
    _Bool _requiresExtensionDisablement;
    _Bool _requiresExtensionSynchronization;
    long long _startingSchemaVersion;
    long long _endingSchemaVersion;
}

@property (nonatomic) long long startingSchemaVersion;
@property (nonatomic) long long endingSchemaVersion;
@property (nonatomic) _Bool requiresExtensionDisablement;
@property (nonatomic) _Bool requiresExtensionSynchronization;

@end
