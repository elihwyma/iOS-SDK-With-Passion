/*
 Image: /System/Library/Frameworks/CallKit.framework/CallKit
 */

#import <Foundation/NSObject.h>

@class LSPlugInKitProxy, NSString;

@interface CXCallDirectoryExtension : NSObject

{
    _Bool _onlyExtensionInContainingApp;
    NSString *_identifier;
    long long _state;
    long long _priority;
    NSString *_localizedName;
    NSString *_localizedContainingAppName;
    LSPlugInKitProxy *_plugInKitProxy;
}

@property (copy, nonatomic) NSString *identifier;
@property (nonatomic) long long state;
@property (nonatomic) long long priority;
@property (copy, nonatomic) NSString *localizedName;
@property (copy, nonatomic) NSString *localizedContainingAppName;
@property (retain, nonatomic) LSPlugInKitProxy *plugInKitProxy;
@property (nonatomic, getter=isOnlyExtensionInContainingApp) _Bool onlyExtensionInContainingApp;

+ (_Bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
