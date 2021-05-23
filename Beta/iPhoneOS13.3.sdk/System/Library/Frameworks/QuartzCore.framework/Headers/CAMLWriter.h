/*
 Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import <Foundation/NSObject.h>

@class NSURL;

@protocol CAMLWriterDelegate;

@interface CAMLWriter : NSObject

{
    struct _CAMLWriterPriv *_priv;
}

@property (retain) NSURL *baseURL;
@property (weak) id <CAMLWriterDelegate> delegate;

+ (id)writerWithData:(id)arg1;

- (void)dealloc;
- (id)initWithData:(id)arg1;
- (void)encodeObject:(id)arg1;
- (void)endElement;
- (void)beginPropertyElement:(id)arg1;
- (void)setElementAttribute:(id)arg1 forKey:(id)arg2;
- (void)setElementContent:(id)arg1;
- (id)URLStringForResource:(id)arg1;
- (void)beginElement:(unsigned int)arg1;
- (void)encodeObject:(id)arg1 conditionally:(_Bool)arg2;
- (void)_writeElementTree:(struct _CAMLWriterElement *)arg1;

@end
