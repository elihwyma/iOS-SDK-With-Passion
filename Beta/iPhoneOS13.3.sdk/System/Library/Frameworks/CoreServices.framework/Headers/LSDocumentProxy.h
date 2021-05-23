/*
 Image: /System/Library/Frameworks/CoreServices.framework/CoreServices
 */

#import <CoreServices/LSResourceProxy.h>

@class NSString, NSURL;

@interface LSDocumentProxy : LSResourceProxy

{
    CDStruct_4c969caf _sourceAuditToken;
    _Bool _isContentManaged;
    NSURL *_URL;
    NSString *_name;
    NSString *_typeIdentifier;
    NSString *_MIMEType;
}

@property (readonly, getter=isImageOrVideo) _Bool imageOrVideo;
@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *typeIdentifier;
@property (nonatomic, readonly) NSString *MIMEType;
@property (nonatomic, readonly) NSString *containerOwnerApplicationIdentifier;
@property (nonatomic, readonly, getter=isContentManaged) _Bool contentManaged;
@property (nonatomic, readonly) const CDStruct_4c969caf *sourceAuditToken;
@property (nonatomic, readonly) _Bool sourceIsManaged;
@property (nonatomic, readonly) const CDStruct_4c969caf *managedSourceAuditToken;

+ (_Bool)supportsSecureCoding;
+ (id)documentProxyForURL:(id)arg1 isContentManaged:(_Bool)arg2 sourceAuditToken:(const CDStruct_4c969caf *)arg3;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 isContentManaged:(_Bool)arg4 sourceAuditToken:(const CDStruct_4c969caf *)arg5;
+ (id)documentProxyForURL:(id)arg1;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3;
+ (id)documentProxyForURL:(id)arg1 managedSourceAuditToken:(const CDStruct_4c969caf *)arg2;
+ (id)documentProxyForURL:(id)arg1 sourceIsManaged:(_Bool)arg2;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 managedSourceAuditToken:(const CDStruct_4c969caf *)arg4;
+ (id)documentProxyForName:(id)arg1 type:(id)arg2 MIMEType:(id)arg3 sourceIsManaged:(_Bool)arg4;

- (id)description;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)uniqueIdentifier;
- (id)applicationsAvailableForOpeningWithStyle:(unsigned char)arg1 limit:(unsigned long long)arg2 XPCConnection:(id)arg3 error:(id *)arg4;
- (id)_boundIconInfo;
- (id)iconDataForVariant:(int)arg1 withOptions:(int)arg2;
- (id)initWithURL:(id)arg1 name:(id)arg2 type:(id)arg3 MIMEType:(id)arg4 isContentManaged:(_Bool)arg5 sourceAuditToken:(const CDStruct_4c969caf *)arg6;
- (id)applicationsAvailableForOpeningWithHandlerRanks:(id)arg1 error:(id *)arg2;
- (id)applicationsAvailableForOpeningWithError:(id *)arg1;
- (id)applicationsAvailableForOpeningFromAirDropWithError:(id *)arg1;
- (id)applicationsAvailableForOpeningByDraggingAndDroppingWithError:(id *)arg1;
- (optional_084b935d)_bindingEvaluatorWithAuditToken:(const CDStruct_4c969caf *)arg1;

@end
