/*
 Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <Foundation/NSObject.h>

@class NSXPCInterface;

__attribute__((visibility("hidden")))
@interface _NSXPCConnectionExportInfo : NSObject

{
    id _exportedObject;
    NSXPCInterface *_exportedInterface;
    long long _exportCount;
}

@property (retain, nonatomic) id exportedObject;
@property (retain, nonatomic) NSXPCInterface *exportedInterface;
@property (nonatomic) long long exportCount;

- (id)init;
- (void)dealloc;
- (id)description;

@end
