/*
 Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
 */

#import <Foundation/NSObject.h>

@class EQKitEnvironmentInstance, NSData, NSError;

@interface EQKitMathMLParser : NSObject

{
    struct _xmlNode *mRootNode;
    struct _xmlNs *mNS;
    NSError *mError;
    EQKitEnvironmentInstance *mEnvironment;
    NSData *mSource;
    struct stack<EQKitMathMLParserState, std::__1::deque<EQKitMathMLParserState, std::__1::allocator<EQKitMathMLParserState>>> mState;
    struct AttributeCollection *mAttributeCollection;
}

@property (nonatomic, readonly) struct _xmlNs *ns;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic) struct AttributeCollection *attributeCollection;

- (id)init;
- (void)dealloc;
- (int)state;
- (id)environment;
- (id)parse;
- (id).cxx_construct;
- (void)popState;
- (id)initWithDocument:(struct _xmlDoc *)arg1 node:(struct _xmlNode *)arg2 source:(id)arg3 environment:(id)arg4;
- (void)parseAttributesForNode:(id)arg1 withXMLNode:(struct _xmlNode *)arg2;
- (void)reportError:(long long)arg1 withNode:(struct _xmlNode *)arg2;
- (id)parseNode:(struct _xmlNode *)arg1;
- (id)parseChildrenAsArrayFromXMLNode:(struct _xmlNode *)arg1;
- (void)pushState:(int)arg1;
- (_Bool)isElement:(int)arg1 allowedInState:(int)arg2;
- (id)parseChildrenAsNodeFromXMLNode:(struct _xmlNode *)arg1;
- (id)parseChildrenAsTokenContentFromXMLNode:(struct _xmlNode *)arg1;

@end
